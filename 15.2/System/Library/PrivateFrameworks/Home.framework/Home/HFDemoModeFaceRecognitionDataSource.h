@class NSArray;

@interface HFDemoModeFaceRecognitionDataSource : NSObject

@property (retain, nonatomic) NSArray *recentsEntries;
@property (retain, nonatomic) NSArray *knownToHouseholdEntries;

- (void).cxx_destruct;
- (id)init;
- (id)arrayFromPlistArray:(id)a0;

@end
