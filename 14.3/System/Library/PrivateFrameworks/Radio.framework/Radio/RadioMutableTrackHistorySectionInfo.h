@class NSString, NSArray;

@interface RadioMutableTrackHistorySectionInfo : RadioTrackHistorySectionInfo

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *indexTitle;
@property (nonatomic) unsigned long long numberOfObjects;
@property (retain, nonatomic) NSArray *objects;

- (void)setName:(id)a0;
- (void)setObjects:(id)a0;
- (void)setIndexTitle:(id)a0;
- (void)setNumberOfObjects:(unsigned long long)a0;

@end
