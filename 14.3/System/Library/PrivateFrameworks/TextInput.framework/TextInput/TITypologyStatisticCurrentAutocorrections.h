@class TICandidateRequestToken, TIAutocorrectionList;

@interface TITypologyStatisticCurrentAutocorrections : TITypologyStatistic

@property (retain, nonatomic) TIAutocorrectionList *autocorrections;
@property (retain, nonatomic) TICandidateRequestToken *requestToken;

- (void).cxx_destruct;
- (void)visitRecordAutocorrections:(id)a0;

@end
