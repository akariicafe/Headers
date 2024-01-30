@class NSString;

@interface MREMeta : NSObject

@property (readonly, nonatomic) unsigned long long trackId;
@property (readonly, nonatomic) unsigned long long songId;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, retain, nonatomic) NSString *artist;

- (void)dealloc;
- (id)initWithTrackId:(unsigned long long)a0 songId:(unsigned long long)a1 title:(id)a2 artist:(id)a3;

@end
