@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying>

@property (nonatomic) unsigned short notifyStatus;
@property (retain, nonatomic) NSData *notifyData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNotifyStatus:(unsigned short)a0 notifyData:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
