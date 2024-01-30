@class NSString;

@interface _UIDebugLogStatement : NSObject

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long indentLevel;
@property (copy, nonatomic) NSString *prefix;
@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)init;

@end
