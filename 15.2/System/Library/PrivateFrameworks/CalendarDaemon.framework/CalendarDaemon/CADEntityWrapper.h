@class NSArray, CADObjectID;

@interface CADEntityWrapper : NSObject <NSSecureCoding> {
    int _entityType;
    int _rowID;
    NSArray *_loadedValues;
    CADObjectID *_objectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL deleted;

- (id)loadedValues;
- (void)encodeWithCoder:(id)a0;
- (id)objectID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCalEntity:(void *)a0;
- (id)initWithCalEntity:(void *)a0 propertiesToLoad:(id)a1;

@end
