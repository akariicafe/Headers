@class NSString, NSDictionary;

@interface VSFormatArgument : NSObject {
    NSString *formatSpecifier;
    NSDictionary *attributes;
    NSString *formattedArg;
}

- (void)dealloc;

@end
