@class NSString;

@interface WKNSNumber : NSNumber <WKObject> {
    int _type;
    union { struct ObjectStorage<API::Number<bool, API::Object::Type::Boolean>> { struct type { unsigned char __lx[24]; } data; } _boolean; struct ObjectStorage<API::Number<double, API::Object::Type::Double>> { struct type { unsigned char __lx[24]; } data; } _double; struct ObjectStorage<API::Number<unsigned long long, API::Object::Type::UInt64>> { struct type { unsigned char __lx[24]; } data; } _uint64; struct ObjectStorage<API::Number<long long, API::Object::Type::Int64>> { struct type { unsigned char __lx[24]; } data; } _int64; } _number;
}

@property (readonly) struct Object { void /* function */ **x0; id x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (const char *)objCType;
- (char)charValue;
- (long long)longLongValue;
- (unsigned long long)unsignedLongLongValue;
- (void)getValue:(void *)a0;
- (double)doubleValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
