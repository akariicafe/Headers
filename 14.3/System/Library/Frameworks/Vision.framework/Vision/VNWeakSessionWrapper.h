@class VNSession;

@interface VNWeakSessionWrapper : NSObject {
    VNSession *_weakSession;
}

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)sessionAndReturnError:(id *)a0;

@end
