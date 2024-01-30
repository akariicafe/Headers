@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_desc;
}

+ (void)initialize;
+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

- (unsigned int)mediaType;
- (id)description;
- (id)_initWithMetadataFormat:(struct opaqueCMFormatDescription { } *)a0;
- (struct opaqueCMFormatDescription { } *)formatDescription;
- (void)dealloc;
- (id)debugDescription;

@end
