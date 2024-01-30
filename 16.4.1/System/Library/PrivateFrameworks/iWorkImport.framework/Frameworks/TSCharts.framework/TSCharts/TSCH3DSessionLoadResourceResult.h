@class TSCH3DResource, TSCH3DResourceHandle;

@interface TSCH3DSessionLoadResourceResult : NSObject

@property (nonatomic) BOOL generated;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) BOOL failed;
@property (retain, nonatomic) TSCH3DResourceHandle *handle;
@property (retain, nonatomic) TSCH3DResource *resource;

- (BOOL)exists;
- (id)init;
- (void).cxx_destruct;

@end
