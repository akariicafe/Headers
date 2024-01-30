@interface NSTaggedPointerStringCStringContainer : NSObject {
    char cString[16];
}

+ (id)taggedPointerStringCStringContainer;

- (oneway void)release;
- (id)retain;

@end
