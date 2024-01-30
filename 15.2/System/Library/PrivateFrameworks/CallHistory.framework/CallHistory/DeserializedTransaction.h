@class CHRecentCall;

@interface DeserializedTransaction : NSObject

@property (readonly, nonatomic) CHRecentCall *call;
@property unsigned long long type;

- (void).cxx_destruct;
- (id)initWithCall:(id)a0 andType:(unsigned long long)a1;

@end
