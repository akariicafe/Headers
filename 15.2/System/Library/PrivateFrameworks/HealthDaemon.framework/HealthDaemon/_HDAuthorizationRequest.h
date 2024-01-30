@class NSUUID, NSSet;

@interface _HDAuthorizationRequest : NSObject {
    id /* block */ _completionHandler;
    NSUUID *_identifier;
    NSSet *_typesToWrite;
    NSSet *_typesToRead;
}

- (id)description;
- (void).cxx_destruct;

@end
