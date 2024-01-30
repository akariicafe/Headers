@class NSString;

@interface CNVCardParameter : NSObject

@property (readonly) NSString *name;
@property (readonly) NSString *value;

+ (id)parameterWithName:(id)a0 value:(id)a1;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;

@end
