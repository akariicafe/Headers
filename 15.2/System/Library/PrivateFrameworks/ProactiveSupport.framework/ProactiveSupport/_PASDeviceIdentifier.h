@class NSUUID, NSString;

@interface _PASDeviceIdentifier : NSObject {
    NSString *_path;
}

@property (readonly) NSUUID *UUID;

- (void).cxx_destruct;
- (id)initWithBasePath:(id)a0;
- (id)init;
- (void)reset;

@end
