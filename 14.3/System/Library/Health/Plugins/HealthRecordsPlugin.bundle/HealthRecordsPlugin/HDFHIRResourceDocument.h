@class NSArray, NSMutableArray;

@interface HDFHIRResourceDocument : NSObject {
    NSMutableArray *_resourceObjects;
}

@property (readonly, copy, nonatomic) NSArray *resourceObjects;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)_dictionaryRepresentationWithResourceHandler:(id /* block */)a0;
- (void)addResourceObjects:(id)a0;

@end
