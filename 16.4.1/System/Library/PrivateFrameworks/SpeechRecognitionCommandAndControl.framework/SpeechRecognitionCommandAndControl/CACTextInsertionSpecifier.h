@class NSString, AXElement, NSDictionary;

@interface CACTextInsertionSpecifier : NSObject

@property (retain) NSString *insertedString;
@property struct _NSRange { unsigned long long location; unsigned long long length; } insertedRange;
@property (retain) AXElement *axElement;
@property (retain) NSString *commandIdentifier;
@property (retain) NSDictionary *recognizedParams;
@property (retain) NSString *insertedCategoryID;

- (void).cxx_destruct;

@end
