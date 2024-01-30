@class NSString;

@interface CKGroupUpdate : NSObject

@property (nonatomic) unsigned long long groupUpdateType;
@property (retain, nonatomic) NSString *handleID;

- (id)initWithType:(unsigned long long)a0 handleID:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
