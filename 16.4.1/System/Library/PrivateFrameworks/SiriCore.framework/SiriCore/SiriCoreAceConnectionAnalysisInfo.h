@class NSString, NSURL, SiriCoreConnectionType, NSNumber;

@interface SiriCoreAceConnectionAnalysisInfo : NSObject

@property (readonly, nonatomic) NSURL *connectionURL;
@property (readonly, nonatomic) int interfaceIndex;
@property (readonly, copy, nonatomic) NSNumber *sendBufferSize;
@property (readonly, nonatomic) BOOL wwanPreferred;
@property (readonly, nonatomic) SiriCoreConnectionType *connectionType;
@property (copy, nonatomic) NSString *policyId;

- (void).cxx_destruct;
- (id)initWithConnectionURL:(id)a0 interfaceIndex:(int)a1 sendBufferSize:(id)a2 wwanPreferred:(BOOL)a3 connectionType:(id)a4 policyId:(id)a5;

@end
