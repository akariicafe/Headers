@class NSString;

@interface SPRScriptInfo : NSObject

@property (readonly, nonatomic) unsigned long long scriptID;
@property (readonly, nonatomic) NSString *scriptName;
@property (readonly, nonatomic) unsigned int apduCount;

- (void).cxx_destruct;
- (id)initWithScriptID:(unsigned long long)a0 scriptName:(id)a1 apduCount:(unsigned int)a2;

@end
