@class NSString;

@interface CKObjCType : NSObject {
    NSString *_encoding;
    NSString *_name;
    unsigned long long _flags;
}

@property (readonly, nonatomic) long long code;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSString *className;

+ (id)typeForValue:(id)a0;
+ (id)typeForEncoding:(const char *)a0;

- (void).cxx_destruct;

@end
