@class NSString, NSSet;

@interface EDImportantMLModelInput : NSObject <MLFeatureProvider>

@property (nonatomic) double cc_contains_contact;
@property (nonatomic) double cc_is_top_direct_addresses_based_on_respond;
@property (nonatomic) double cc_is_top_direct_addresses_based_on_scroll;
@property (nonatomic) double cc_is_top_direct_addresses_based_on_send;
@property (nonatomic) double cc_is_top_direct_addresses_based_on_view;
@property (nonatomic) double cc_is_top_indirect_addresses_based_on_respond;
@property (nonatomic) double cc_is_top_indirect_addresses_based_on_scroll;
@property (nonatomic) double cc_is_top_indirect_addresses_based_on_send;
@property (nonatomic) double cc_is_top_indirect_addresses_based_on_view;
@property (nonatomic) double cc_is_vip;
@property (nonatomic) double from_list_id;
@property (nonatomic) double message_is_forward;
@property (nonatomic) double message_is_reply;
@property (nonatomic) double num_recipients;
@property (nonatomic) double sender_is_contact;
@property (nonatomic) double sender_is_top_direct_addresses_based_on_respond;
@property (nonatomic) double sender_is_top_direct_addresses_based_on_scroll;
@property (nonatomic) double sender_is_top_direct_addresses_based_on_send;
@property (nonatomic) double sender_is_top_direct_addresses_based_on_view;
@property (nonatomic) double sender_is_top_indirect_addresses_based_on_respond;
@property (nonatomic) double sender_is_top_indirect_addresses_based_on_scroll;
@property (nonatomic) double sender_is_top_indirect_addresses_based_on_send;
@property (nonatomic) double sender_is_top_indirect_addresses_based_on_view;
@property (nonatomic) double sender_is_vip;
@property (nonatomic) double subject_is_top_words_based_on_respond;
@property (nonatomic) double subject_is_top_words_based_on_scroll;
@property (nonatomic) double subject_is_top_words_based_on_send;
@property (nonatomic) double subject_is_top_words_based_on_view;
@property (retain, nonatomic) NSString *time_received;
@property (nonatomic) double to_contains_contact;
@property (nonatomic) double to_is_top_direct_addresses_based_on_respond;
@property (nonatomic) double to_is_top_direct_addresses_based_on_scroll;
@property (nonatomic) double to_is_top_direct_addresses_based_on_send;
@property (nonatomic) double to_is_top_direct_addresses_based_on_view;
@property (nonatomic) double to_is_top_indirect_addresses_based_on_respond;
@property (nonatomic) double to_is_top_indirect_addresses_based_on_scroll;
@property (nonatomic) double to_is_top_indirect_addresses_based_on_send;
@property (nonatomic) double to_is_top_indirect_addresses_based_on_view;
@property (nonatomic) double to_is_vip;
@property (nonatomic) double user_is_bcc;
@property (nonatomic) double user_is_cc;
@property (nonatomic) double user_is_sender;
@property (nonatomic) double user_is_to;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithCc_contains_contact:(double)a0 cc_is_top_direct_addresses_based_on_respond:(double)a1 cc_is_top_direct_addresses_based_on_scroll:(double)a2 cc_is_top_direct_addresses_based_on_send:(double)a3 cc_is_top_direct_addresses_based_on_view:(double)a4 cc_is_top_indirect_addresses_based_on_respond:(double)a5 cc_is_top_indirect_addresses_based_on_scroll:(double)a6 cc_is_top_indirect_addresses_based_on_send:(double)a7 cc_is_top_indirect_addresses_based_on_view:(double)a8 cc_is_vip:(double)a9 from_list_id:(double)a10 message_is_forward:(double)a11 message_is_reply:(double)a12 num_recipients:(double)a13 sender_is_contact:(double)a14 sender_is_top_direct_addresses_based_on_respond:(double)a15 sender_is_top_direct_addresses_based_on_scroll:(double)a16 sender_is_top_direct_addresses_based_on_send:(double)a17 sender_is_top_direct_addresses_based_on_view:(double)a18 sender_is_top_indirect_addresses_based_on_respond:(double)a19 sender_is_top_indirect_addresses_based_on_scroll:(double)a20 sender_is_top_indirect_addresses_based_on_send:(double)a21 sender_is_top_indirect_addresses_based_on_view:(double)a22 sender_is_vip:(double)a23 subject_is_top_words_based_on_respond:(double)a24 subject_is_top_words_based_on_scroll:(double)a25 subject_is_top_words_based_on_send:(double)a26 subject_is_top_words_based_on_view:(double)a27 time_received:(id)a28 to_contains_contact:(double)a29 to_is_top_direct_addresses_based_on_respond:(double)a30 to_is_top_direct_addresses_based_on_scroll:(double)a31 to_is_top_direct_addresses_based_on_send:(double)a32 to_is_top_direct_addresses_based_on_view:(double)a33 to_is_top_indirect_addresses_based_on_respond:(double)a34 to_is_top_indirect_addresses_based_on_scroll:(double)a35 to_is_top_indirect_addresses_based_on_send:(double)a36 to_is_top_indirect_addresses_based_on_view:(double)a37 to_is_vip:(double)a38 user_is_bcc:(double)a39 user_is_cc:(double)a40 user_is_sender:(double)a41 user_is_to:(double)a42;

@end
