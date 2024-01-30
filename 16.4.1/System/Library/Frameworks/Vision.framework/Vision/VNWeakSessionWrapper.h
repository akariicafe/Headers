@class VNSession;

@interface VNWeakSessionWrapper : NSObject {
    VNSession *_weakSession;
}

- (id)sessionAndReturnError:(id *)a0;
- (id)description;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;

@end
