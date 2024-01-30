@class NSString;

@interface PKObjectProperty : NSObject {
    NSString *_name;
    NSString *_variableName;
    Class _aClass;
    unsigned long long _type;
    NSString *_valueGetter;
}

- (void).cxx_destruct;

@end
