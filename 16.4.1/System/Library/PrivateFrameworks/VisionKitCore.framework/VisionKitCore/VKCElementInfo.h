@class NSString;

@interface VKCElementInfo : VKCBaseElement

@property (retain, nonatomic) NSString *text;

+ (id)infoWithText:(id)a0 parent:(id)a1;

- (id)stringValue;
- (id)children;
- (void).cxx_destruct;

@end
