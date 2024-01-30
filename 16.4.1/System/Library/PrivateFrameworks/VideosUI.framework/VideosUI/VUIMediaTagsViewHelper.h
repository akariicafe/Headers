@class NSNumberFormatter, NSMutableDictionary, NSDateComponentsFormatter;

@interface VUIMediaTagsViewHelper : NSObject {
    NSMutableDictionary *_tagsViewDictionary;
    NSDateComponentsFormatter *_dateComponentFormatter;
    NSNumberFormatter *_tomatoPercentFormatter;
}

- (void).cxx_destruct;
- (BOOL)_isValidNumber:(id)a0;
- (void)_mediaBagdesWithVUIMediaEntity:(id)a0;
- (id)_commonSenseString:(id)a0;
- (id)_durationDescriptionFromDuration:(id)a0;
- (id)_releaseDateDescriptionFromDate:(id)a0;
- (void)addSeperatorKey:(id)a0;
- (id)initWithContentMetadata:(id)a0 additionalMetadata:(id)a1;
- (id)initWithVUIMediaEntity:(id)a0;
- (id)initWithVUIMediaItem:(id)a0;
- (id)tagsViewDictionary;

@end
