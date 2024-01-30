@protocol SASerializable;

@interface SAObjectListEntry : NSObject {
    id<SASerializable> _instance;
    unsigned long long _size;
}

- (void).cxx_destruct;

@end
