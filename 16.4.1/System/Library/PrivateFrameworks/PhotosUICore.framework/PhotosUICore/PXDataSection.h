@class NSString;
@protocol NSObject, NSCopying;

@interface PXDataSection : NSObject <PXFastEnumeration, NSFastEnumeration>

@property (readonly) unsigned long long count;
@property (readonly, nonatomic) id firstObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<NSObject, NSCopying> outlineObject;
@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) BOOL containsAnyObjects;
@property (readonly, nonatomic) id content;

+ (id)dataSectionForAssetsInAssetContainers:(id)a0;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)objectsAtIndexes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectAtIndex:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithOutlineObject:(id)a0;

@end
