@class NSArray, NSDictionary, CLLocation, NSDate, PHPhotoLibrary;

@interface PHMemoryGenerationOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long reason;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSArray *peopleNames;
@property (retain, nonatomic) NSArray *existingMemories;
@property (retain, nonatomic) NSArray *blockedMemories;
@property (retain, nonatomic) NSDictionary *extraParameters;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
