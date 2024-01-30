@class NSString;

@interface PDXPCApplicationInfo : NSObject

@property (readonly, nonatomic) unsigned int applicationState;
@property (readonly, nonatomic) NSString *displayID;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
