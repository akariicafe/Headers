@interface _EARPhonesetMapping : NSObject {
    struct shared_ptr<quasar::PhonesetMapping> { struct PhonesetMapping *__ptr_; struct __shared_weak_count *__cntrl_; } _phoneset;
}

- (id).cxx_construct;
- (id)initWithLanguage:(id)a0;
- (void).cxx_destruct;
- (id)ipaPhoneSequenceForAsrProns:(id)a0;
- (id)nvAsrPhoneSequenceForXsampaProns:(id)a0;

@end
