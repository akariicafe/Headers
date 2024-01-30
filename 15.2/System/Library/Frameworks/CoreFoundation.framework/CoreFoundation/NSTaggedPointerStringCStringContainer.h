@interface NSTaggedPointerStringCStringContainer : NSObject {
    char cString[16];
}

+ (id)taggedPointerStringCStringContainer;

- (id)retain;
- (oneway void)release;

@end
