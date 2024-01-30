@class NSUUID, NWEndpoint, NSString;

@interface NEFilterSocketFlow : NEFilterFlow <NSSecureCoding, NSCopying> {
    long long _generateIdentifierOnce;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSUUID *euuid;
@property (copy) NWEndpoint *localEndpoint;
@property (copy) NWEndpoint *remoteEndpoint;
@property (copy) NSString *remoteHostname;
@property int socketFamily;
@property int socketType;
@property int socketProtocol;
@property unsigned long long socketID;
@property (readonly) NSUUID *socketUUID;

+ (BOOL)writeMessageWithControlSocket:(int)a0 drop:(BOOL)a1 socketID:(unsigned long long)a2 inboundPassOffset:(unsigned long long)a3 inboundPeekOffset:(unsigned long long)a4 outboundPassOffset:(unsigned long long)a5 outboundPeekOffset:(unsigned long long)a6 statsReportFrequency:(long long)a7;

- (id)identifier;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)createDataReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (BOOL)createNewFlowReply:(id)a0 controlSocket:(int)a1 verdict:(id)a2 context:(id)a3;
- (id)identifierString;
- (BOOL)createDataCompleteReply:(id)a0 controlSocket:(int)a1 direction:(long long)a2 verdict:(id)a3 context:(id)a4;
- (void)setRemoteAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;
- (id)initWithSocketFamily:(int)a0 socketType:(int)a1 socketProtocol:(int)a2 pid:(int)a3 epid:(int)a4 uuid:(unsigned char[16])a5 euuid:(unsigned char[16])a6 socketID:(unsigned long long)a7;
- (void).cxx_destruct;
- (void)writeXPCMessage:(id)a0 drop:(BOOL)a1 inboundPassOffset:(unsigned long long)a2 inboundPeekOffset:(unsigned long long)a3 outboundPassOffset:(unsigned long long)a4 outboundPeekOffset:(unsigned long long)a5 statsReportFrequency:(long long)a6;
- (void)writeCurrentVerdictWithMessage:(id)a0 controlSocket:(int)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLocalAddress:(struct sockaddr { unsigned char x0; unsigned char x1; char x2[14]; } *)a0;

@end
