@class VNSession;

@interface VNWeakSessionWrapper : NSObject {
    VNSession *_weakSession;
}

- (id)initWithSession:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)sessionAndReturnError:(id *)a0;

@end
