@class NSString;

@interface PXDebugValue : NSObject

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned long long highlightStyle;

- (void).cxx_destruct;
- (id)initWithLabel:(id)a0;

@end
