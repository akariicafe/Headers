@class NSString, NSNumber, GDLazyGraphTripleRowCursor;

@interface GDLazyGraphTripleRow : NSObject <GDExtendedTriple> {
    NSString *_subjectOverride;
    NSString *_subject;
    NSString *_predicate;
    NSString *_relationshipId;
    NSString *_relationshipPredicate;
    NSString *_object;
    NSString *_sources;
    NSNumber *_confidence;
    NSString *_sourceDuplicates;
    NSNumber *_timestamp;
    GDLazyGraphTripleRowCursor *_cursor;
}

@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *predicate;
@property (readonly, nonatomic) NSString *relationshipId;
@property (readonly, nonatomic) NSString *relationshipPredicate;
@property (readonly, nonatomic) NSString *object;
@property (readonly, nonatomic) NSString *sources;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) NSString *sourceDuplicates;
@property (readonly, nonatomic) double timestamp;

- (void).cxx_destruct;

@end
