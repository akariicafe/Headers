@class NSString, NSDictionary;

@interface TTSFormatArgument : NSObject {
    NSString *formatSpecifier;
    NSDictionary *attributes;
    NSString *formattedArg;
}

- (void)dealloc;

@end
