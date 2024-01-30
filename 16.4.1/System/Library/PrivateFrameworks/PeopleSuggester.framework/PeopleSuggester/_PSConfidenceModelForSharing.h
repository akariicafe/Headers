@class _PSConfidenceModelDriver;

@interface _PSConfidenceModelForSharing : NSObject

@property (retain, nonatomic) _PSConfidenceModelDriver *confidenceModelDriver;
@property BOOL _PSConfidenceModelInUse;

- (id)initWithConfig:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addEventForModel:(id)a0 event:(id)a1;
- (BOOL)findObjectWithID:(id)a0 inArray:(id)a1;
- (double)getConfidenceForModel:(id)a0;
- (id)getConfidenceRankedModelKeysGivenKeysToSort:(id)a0;

@end
