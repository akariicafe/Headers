@class NSString;

@interface PDHeadersFooters : NSObject {
    BOOL mHasDateTime;
    BOOL mHasNowDateTime;
    BOOL mHasUserDateTime;
    BOOL mHasSlideNumber;
    BOOL mHasHeader;
    BOOL mHasFooter;
    int mDateTimeFormat;
    NSString *mUserDateTime;
    NSString *mHeader;
    NSString *mFooter;
}

- (void)setHeader:(id)a0;
- (void)setFooter:(id)a0;
- (id)header;
- (id)footer;
- (BOOL)hasHeader;
- (void).cxx_destruct;
- (void)setHasHeader:(BOOL)a0;
- (BOOL)hasDateTime;
- (BOOL)hasFooter;
- (BOOL)hasUserDateTime;
- (void)setHasDateTime:(BOOL)a0;
- (BOOL)hasNowDateTime;
- (BOOL)hasSlideNumber;
- (void)setHasFooter:(BOOL)a0;
- (void)setHasNowDateTime:(BOOL)a0;
- (void)setHasSlideNumber:(BOOL)a0;
- (void)setHasUserDateTime:(BOOL)a0;
- (void)setUserDateTime:(id)a0;
- (id)userDateTime;

@end
