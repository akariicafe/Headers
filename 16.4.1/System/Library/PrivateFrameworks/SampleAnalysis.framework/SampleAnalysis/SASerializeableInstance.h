@protocol SASerializable;

@interface SASerializeableInstance : NSObject {
    BOOL _populated;
    id<SASerializable> _instance;
}

- (void).cxx_destruct;

@end
