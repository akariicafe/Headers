@class NSString, NSArray;

@interface SFContactAutoFillValue : NSObject

@property (nonatomic) BOOL selected;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *displayValue;
@property (readonly, copy, nonatomic) NSArray *matches;

- (void).cxx_destruct;
- (id)initWithMatches:(id)a0 displayValue:(id)a1 label:(id)a2;

@end
