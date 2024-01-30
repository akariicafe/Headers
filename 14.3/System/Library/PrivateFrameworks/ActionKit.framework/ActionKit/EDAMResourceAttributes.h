@class NSString, NSNumber, EDAMLazyMap;

@interface EDAMResourceAttributes : FATObject

@property (retain, nonatomic) NSString *sourceURL;
@property (retain, nonatomic) NSNumber *timestamp;
@property (retain, nonatomic) NSNumber *latitude;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *altitude;
@property (retain, nonatomic) NSString *cameraMake;
@property (retain, nonatomic) NSString *cameraModel;
@property (retain, nonatomic) NSNumber *clientWillIndex;
@property (retain, nonatomic) NSString *recoType;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSNumber *attachment;
@property (retain, nonatomic) EDAMLazyMap *applicationData;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
