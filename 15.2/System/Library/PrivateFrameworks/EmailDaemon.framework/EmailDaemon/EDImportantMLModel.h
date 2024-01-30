@class MLModel;

@interface EDImportantMLModel : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (id)URLOfModelInThisBundle;
+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMLModel:(id)a0;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionFromCc_contains_contact:(double)a0 cc_is_top_direct_addresses_based_on_respond:(double)a1 cc_is_top_direct_addresses_based_on_scroll:(double)a2 cc_is_top_direct_addresses_based_on_send:(double)a3 cc_is_top_direct_addresses_based_on_view:(double)a4 cc_is_top_indirect_addresses_based_on_respond:(double)a5 cc_is_top_indirect_addresses_based_on_scroll:(double)a6 cc_is_top_indirect_addresses_based_on_send:(double)a7 cc_is_top_indirect_addresses_based_on_view:(double)a8 cc_is_vip:(double)a9 from_list_id:(double)a10 message_is_forward:(double)a11 message_is_reply:(double)a12 num_recipients:(double)a13 sender_is_contact:(double)a14 sender_is_top_direct_addresses_based_on_respond:(double)a15 sender_is_top_direct_addresses_based_on_scroll:(double)a16 sender_is_top_direct_addresses_based_on_send:(double)a17 sender_is_top_direct_addresses_based_on_view:(double)a18 sender_is_top_indirect_addresses_based_on_respond:(double)a19 sender_is_top_indirect_addresses_based_on_scroll:(double)a20 sender_is_top_indirect_addresses_based_on_send:(double)a21 sender_is_top_indirect_addresses_based_on_view:(double)a22 sender_is_vip:(double)a23 subject_is_top_words_based_on_respond:(double)a24 subject_is_top_words_based_on_scroll:(double)a25 subject_is_top_words_based_on_send:(double)a26 subject_is_top_words_based_on_view:(double)a27 time_received:(id)a28 to_contains_contact:(double)a29 to_is_top_direct_addresses_based_on_respond:(double)a30 to_is_top_direct_addresses_based_on_scroll:(double)a31 to_is_top_direct_addresses_based_on_send:(double)a32 to_is_top_direct_addresses_based_on_view:(double)a33 to_is_top_indirect_addresses_based_on_respond:(double)a34 to_is_top_indirect_addresses_based_on_scroll:(double)a35 to_is_top_indirect_addresses_based_on_send:(double)a36 to_is_top_indirect_addresses_based_on_view:(double)a37 to_is_vip:(double)a38 user_is_bcc:(double)a39 user_is_cc:(double)a40 user_is_sender:(double)a41 user_is_to:(double)a42 error:(id *)a43;

@end
