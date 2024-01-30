@interface _EARPhonesetMapping : NSObject {
    struct shared_ptr<quasar::PhonesetMapping> { struct PhonesetMapping *__ptr_; struct __shared_weak_count *__cntrl_; } _phoneset;
}

- (void).cxx_destruct;
- (id)initWithLanguage:(id)a0;
- (id).cxx_construct;
- (id)ipaPhoneSequenceForAsrProns:(id)a0;
- (id)nvAsrPhoneSequenceForXsampaProns:(id)a0;

@end
