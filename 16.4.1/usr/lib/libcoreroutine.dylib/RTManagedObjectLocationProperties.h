@class NSArray;

@interface RTManagedObjectLocationProperties : NSObject

@property (retain, nonatomic) NSArray *latitudePropertyPath;
@property (retain, nonatomic) NSArray *longitudePropertyPath;
@property (retain, nonatomic) NSArray *referenceFramePropertyPath;

- (id)initWithLatitudePropertyPath:(id)a0 longitudePropertyPath:(id)a1 referenceFramePropertyPath:(id)a2;
- (void).cxx_destruct;

@end
