@class NSArray;

@interface HFDemoModeFaceRecognitionDataSource : NSObject

@property (retain, nonatomic) NSArray *recentsEntries;
@property (retain, nonatomic) NSArray *knownToHouseholdEntries;

- (id)init;
- (void).cxx_destruct;
- (id)arrayFromPlistArray:(id)a0;

@end
