@class NSNumber, NSString;

@interface ONOXPathFunctionResult : NSObject

@property (nonatomic) struct _xmlXPathObject { int x0; struct _xmlNodeSet *x1; int x2; double x3; char *x4; void *x5; int x6; void *x7; int x8; } *xmlXPath;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) double numericValue;
@property (readonly, copy, nonatomic) NSNumber *numberValue;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (void)dealloc;

@end
