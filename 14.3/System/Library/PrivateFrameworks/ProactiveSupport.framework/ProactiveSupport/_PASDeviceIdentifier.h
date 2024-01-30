@class NSUUID, NSString;

@interface _PASDeviceIdentifier : NSObject {
    NSString *_path;
}

@property (readonly) NSUUID *UUID;

- (id)initWithBasePath:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end
