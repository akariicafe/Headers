@class NSString, NSDate;

@interface PKEpisode : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ releaseDate;
    void /* unknown type, empty encoding */ guid;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ streamUrl;
    void /* unknown type, empty encoding */ episodeUuid;
}

@property (class, nonatomic) BOOL supportsSecureCoding;
@property (class, nonatomic, readonly) long long mediaTaskType;

@property (nonatomic, readonly) BOOL isInLibrary;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isExplicit;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ duration;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ storeId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ show;
@property (nonatomic, copy) NSString *guid;
@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, readonly) NSString *streamUrl;
@property (nonatomic, copy) NSString *episodeUuid;

+ (id)contentFrom:(id)a0;
+ (id)itemFrom:(id)a0;
+ (void)fetchEpisodeFrom:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initFrom:(id)a0;
- (void)updateForDatabaseMatch;
- (id)initWithTitle:(id)a0 releaseDate:(id)a1 isExplicit:(BOOL)a2 duration:(double)a3 storeId:(id)a4 show:(id)a5 guid:(id)a6 uuid:(id)a7 streamUrl:(id)a8;
- (id)lookupEpisode;

@end
