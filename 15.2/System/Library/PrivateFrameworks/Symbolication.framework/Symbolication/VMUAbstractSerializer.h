@interface VMUAbstractSerializer : NSObject {
    char *_intRegion;
    char *_stringRegion;
    unsigned int _stringRegCapacity;
    unsigned int _intRegCapacity;
    unsigned int _cursor;
}

@end
