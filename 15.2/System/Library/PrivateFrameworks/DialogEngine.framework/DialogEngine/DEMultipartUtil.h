@interface DEMultipartUtil : NSObject

+ (id)getBoundary;
+ (id)getMessageEnd;
+ (id)getBoundaryData;
+ (id)getPartEndData;
+ (id)getMessageEndData;

@end
