@class NSDictionary, NSString, NSSet;

@interface PGMemoryMiroSongDescriptor : NSObject

@property (readonly, nonatomic) NSDictionary *diagnosticsDictionary;
@property (readonly, nonatomic) NSString *songTitle;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) id songIdentifier;
@property (readonly, nonatomic) long long musicType;
@property (readonly, nonatomic) NSSet *genres;
@property (readonly, nonatomic) unsigned long long mood;

- (void).cxx_destruct;
- (id)initWithMemory:(id)a0;
- (id)description;

@end
