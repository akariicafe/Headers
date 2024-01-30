@class NSArray, NSLayoutRect, NSString;

@interface NSStackInContainerRule : NSObject <NSLayoutRule>

@property (readonly, copy) NSLayoutRect *containingRect;
@property (readonly, copy) NSArray *stackedRects;
@property (readonly) double spacing;
@property (readonly) long long orientation;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)horizontalStackWithRects:(id)a0 inContainer:(id)a1 spacing:(double)a2;
+ (id)stackWithOrientation:(long long)a0 stackedRects:(id)a1 inContainer:(id)a2 spacing:(double)a3;
+ (id)verticalStackWithRects:(id)a0 inContainer:(id)a1 spacing:(double)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)makeChildRules;
- (BOOL)isEqual:(id)a0;

@end
